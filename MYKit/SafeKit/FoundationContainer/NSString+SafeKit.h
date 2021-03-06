//
//  NSString+SafeKit.h
//  QMSafeKit
//
//  Created by David on 2018/3/23.
//  Copyright © 2018年 David. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SafeKit)

@property (nonatomic, weak, readonly) id _Nullable safe;
@property (nonatomic, assign, readonly) BOOL isSafe;

@end
