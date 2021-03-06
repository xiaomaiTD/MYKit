//
//  NSHashTable+Safe.m
//  a
//
//  Created by 李阳 on 5/5/2018.
//  Copyright © 2018 BetrayalPromise. All rights reserved.
//

#import "NSHashTable+Safe.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "XXShieldStubObject.h"

@implementation NSHashTable (Safe)

- (NSHashTable <id> *)safe {
    if (!self.isSafe) {
        if (!objc_getAssociatedObject(self, @selector(associatedObjectLifeCycle))) {
            objc_setAssociatedObject(self, @selector(associatedObjectLifeCycle), [XXShieldStubObject new], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        
        NSString *className = [NSString stringWithFormat:@"Safe%@", [self class]];
        Class kClass        = objc_getClass([className UTF8String]);
        if (!kClass) {
            kClass = objc_allocateClassPair([self class], [className UTF8String], 0);
        }
        object_setClass(self, kClass);

//        class_addMethod(kClass, @selector(addObject:), (IMP)safeAddObject, method_getTypeEncoding(class_getInstanceMethod([self class], @selector(addObject))));

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

- (id)forwardingTargetForSelector:(SEL)aSelector {
    return objc_getAssociatedObject(self, @selector(associatedObjectLifeCycle)) != nil ? objc_getAssociatedObject(self, @selector(associatedObjectLifeCycle)) : [XXShieldStubObject new];
}

- (void)associatedObjectLifeCycle {

}

//static void safeAddObject(id self, SEL _cmd, id object) {
//
//}

@end
