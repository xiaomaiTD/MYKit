//
//  UINavigationBar+Translation.h
//  MYKitDemo
//
//  Created by sunjinshuai on 2018/3/14.
//  Copyright © 2018年 com.51fanxing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (Translation)

/**
 设置Bar偏移
 @param translationY 偏移量
 */
- (void)setTranslationY:(CGFloat)translationY;

/**
 获取当前导航栏在垂直方向上偏移了多少
 */
- (CGFloat)getTranslationY;

@end
