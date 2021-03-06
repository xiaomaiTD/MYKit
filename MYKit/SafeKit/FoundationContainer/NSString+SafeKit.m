//
//  NSString+SafeKit.m
//  QMSafeKit
//
//  Created by David on 2018/3/23.
//  Copyright © 2018年 David. All rights reserved.
//

#import "NSString+SafeKit.h"
#import <objc/message.h>

@implementation NSString (SafeKit)

- (id)safe {
    if (!self.isSafe) {
        NSString *className = [NSString stringWithFormat:@"Safe%@", [self class]];
        Class kClass        = objc_getClass([className UTF8String]);
        if (!kClass) {
            kClass = objc_allocateClassPair([self class], [className UTF8String], 0);
        }
        object_setClass(self, kClass);
        
        class_addMethod(kClass, @selector(characterAtIndex:), (IMP)safeCharacterAtIndex, method_getTypeEncoding(class_getInstanceMethod([self class], @selector(characterAtIndex:))));
        
        class_addMethod(kClass, @selector(substringWithRange:), (IMP)safeSubstringWithRange, method_getTypeEncoding(class_getInstanceMethod([self class], @selector(substringWithRange:))));
        
        objc_registerClassPair(kClass);
        self.isSafe = YES;
    }
    
    return self;
}

- (void)setIsSafe:(BOOL)isSafe {
    objc_setAssociatedObject(self, @selector(isSafe), @(isSafe), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (BOOL)isSafe {
    return objc_getAssociatedObject(self, _cmd) != nil ? [objc_getAssociatedObject(self, _cmd) boolValue] : NO;
}

void *safeCharacterAtIndex(id self, SEL _cmd, NSUInteger index) {
    struct objc_super superClass = {
        .receiver    = self,
        .super_class = class_getSuperclass(object_getClass(self))
    };
    void * (*objc_msgSendToSuper)(const void *, SEL, unsigned long) = (void *)objc_msgSendSuper;
    if (index >= [self length]) {
        NSLog(@"\"%@\"-key:(%lu) can not be nil", NSStringFromSelector(_cmd), (unsigned long)index);
        return 0;
    }
    return objc_msgSendToSuper(&superClass, _cmd, index);
}

void *safeSubstringWithRange(id self, SEL _cmd, NSRange range) {
    struct objc_super superClass = {
        .receiver    = self,
        .super_class = class_getSuperclass(object_getClass(self))
    };
    void * (*objc_msgSendToSuper)(const void *, SEL, NSRange) = (void *)objc_msgSendSuper;
    
    if (range.location + range.length > [self length]) {
        
        return @"";
    }
    return objc_msgSendToSuper(&superClass, _cmd, range);
}

@end
