//
//  MYKit.h
//  MYKitDemo
//
//  Created by sunjinshuai on 2017/9/6.
//  Copyright © 2017年 com.51fanxing. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef MYKit_h
#define MYKit_h

#if __has_include(<MYKit/MYKit.h>)

#import <MYKit/UIScreen+Accessor.h>
#import <MYKit/UIActionSheet+Block.h>
#import <MYKit/UIDevice+Extension.h>
#import <MYKit/UIApplication+NetworkActivityIndicator.h>
#import <MYKit/UIApplication+Extension.h>
#import <MYKit/UIBarButtonItem+Badge.h>
#import <MYKit/UIBarButtonItem+Extension.h>
#import <MYKit/UINavigationController+StackManager.h>
#import <MYKit/UINavigationController+Transitions.h>
#import <MYKit/UIScrollView+Extension.h>
#import <MYKit/UITableView+Extension.h>
#import <MYKit/UITextField+Select.h>
#import <MYKit/UITextField+Shake.h>
#import <MYKit/UITextField+InputLimit.h>
#import <MYKit/UITextView+InputLimit.h>
#import <MYKit/UITextView+PlaceHolder.h>
#import <MYKit/UITextView+InputLengthCalculate.h>
#import <MYKit/UITextView+Select.h>
#import <MYKit/UIWebView+Block.h>
#import <MYKit/UIWebView+Load.h>
#import <MYKit/UIWindow+Hierarchy.h>
#import <MYKit/UILabel+CountDown.h>
#import <MYKit/UILabel+FitLines.h>
#import <MYKit/UILabel+AutomaticWriting.h>
#import <MYKit/UIButton+CountDown.h>
#import <MYKit/UIButton+Badge.h>
#import <MYKit/UIButton+ImagePosition.h>
#import <MYKit/UIButton+Indicator.h>
#import <MYKit/UIButton+Submitting.h>
#import <MYKit/UIButton+TouchAreaInsets.h>
#import <MYKit/UIResponder+Router.h>
#import <MYKit/UIResponder+Chain.h>
#import <MYKit/UINavigationItem+Loading.h>
#import <MYKit/UINavigationItem+Margin.h>
#import <MYKit/UINavigationItem+Target.h>
#import <MYKit/UINavigationItem+Addition.h>
#import <MYKit/UIColor+Random.h>
#import <MYKit/UIColor+Hex.h>
#import <MYKit/UIColor+Gradient.h>
#import <MYKit/UIImage+Extension.h>
#import <MYKit/UIImage+Color.h>
#import <MYKit/UIImage+Screenshot.h>
#import <MYKit/UIImage+CornerRadius.h>
#import <MYKit/UIImage+Effect.h>
#import <MYKit/UIView+CornerRadii.h>
#import <MYKit/UIView+RedDot.h>
#import <MYKit/UIView+Position.h>
#import <MYKit/UIView+Gesture.h>
#import <MYKit/UIView+SuperController.h>
#import <MYKit/UIView+Screenshot.h>
#import <MYKit/UIView+Visuals.h>
#import <MYKit/UIView+CustomBorder.h>
#import <MYKit/UIView+Line.h>
#import <MYKit/UIView+FindSubView.h>
#import <MYKit/UIAlertView+Block.h>
#import <MYKit/UIImageView+CornerRadius.h>
#import <MYKit/UIImageView+Reflect.h>
#import <MYKit/UIImageView+FaceAwareFill.h>
#import <MYKit/UIImageView+Letters.h>
#import <MYKit/UIImageView+BetterFace.h>

#import <MYKit/NSNull+NSNullSafe.h>
#import <MYKit/NSMutableAttributedString+ChainProgramming.h>
#import <MYKit/NSAttributedString+AttributedString.h>
#import <MYKit/NSMutableDictionary+ChainProgramming.h>
#import <MYKit/NSMutableDictionary+NilSafe.h>
#import <MYKit/NSMutableArray+SafeAccess.h>
#import <MYKit/NSMutableArray+Sort.h>
#import <MYKit/NSMutableArray+Stack.h>
#import <MYKit/NSMutableArray+Queue.h>
#import <MYKit/NSNumber+Round.h>
#import <MYKit/NSObject+AssociatedObject.h>
#import <MYKit/NSObject+Swizzling.h>
#import <MYKit/NSTimer+Addition.h>
#import <MYKit/NSURL+Param.h>
#import <MYKit/NSURL+URLQuery.h>
#import <MYKit/NSUserDefaults+SafeAccess.h>
#import <MYKit/NSFileManager+Paths.h>
#import <MYKit/NSFileHandle+ReadLine.h>
#import <MYKit/NSDictionary+SafeAccess.h>
#import <MYKit/NSDictionary+JSONString.h>
#import <MYKit/NSDictionary+Plist.h>
#import <MYKit/NSDictionary+Key.h>
#import <MYKit/NSDictionary+NilSafe.h>
#import <MYKit/NSDateFormatter+Extension.h>
#import <MYKit/NSDate+YYAdd.h>
#import <MYKit/NSData+APNSToken.h>
#import <MYKit/NSData+Base64.h>
#import <MYKit/NSData+DataCache.h>
#import <MYKit/NSData+Hash.h>
#import <MYKit/NSData+Encrypt.h>
#import <MYKit/NSData+Encode.h>
#import <MYKit/NSDate+NSDateRFC1123.h>
#import <MYKit/NSDate+Addition.h>
#import <MYKit/NSDate+YYAdd.h>
#import <MYKit/NSDate+Extension.h>
#import <MYKit/NSBundle+AppIcon.h>
#import <MYKit/NSArray+SafeAccess.h>
#import <MYKit/NSArray+Extension.h>
#import <MYKit/NSString+Size.h>
#import <MYKit/NSString+XML.h>
#import <MYKit/NSString+UUID.h>
#import <MYKit/NSString+Trims.h>
#import <MYKit/NSString+Emoji.h>
#import <MYKit/NSString+Contains.h>

#else

#import "NSNull+NSNullSafe.h"
#import "NSMutableAttributedString+ChainProgramming.h"
#import "NSAttributedString+AttributedString.h"
#import "NSMutableDictionary+ChainProgramming.h"
#import "NSMutableDictionary+NilSafe.h"
#import "NSMutableArray+SafeAccess.h"
#import "NSMutableArray+Stack.h"
#import "NSMutableArray+Sort.h"
#import "NSMutableArray+Queue.h"
#import "NSString+Contains.h"
#import "NSString+Emoji.h"
#import "NSString+Trims.h"
#import "NSString+UUID.h"
#import "NSString+XML.h"
#import "NSString+Size.h"
#import "NSArray+SafeAccess.h"
#import "NSArray+Extension.h"
#import "NSBundle+AppIcon.h"
#import "NSData+Encode.h"
#import "NSData+Encrypt.h"
#import "NSData+Hash.h"
#import "NSData+DataCache.h"
#import "NSData+Base64.h"
#import "NSData+APNSToken.h"
#import "NSDate+YYAdd.h"
#import "NSDate+NSDateRFC1123.h"
#import "NSDate+Addition.h"
#import "NSDate+Extension.h"
#import "NSDateFormatter+Extension.h"
#import "NSDictionary+Key.h"
#import "NSDictionary+Plist.h"
#import "NSDictionary+NilSafe.h"
#import "NSDictionary+JSONString.h"
#import "NSDictionary+SafeAccess.h"
#import "NSFileHandle+ReadLine.h"
#import "NSFileManager+Paths.h"
#import "NSUserDefaults+SafeAccess.h"
#import "NSURL+URLQuery.h"
#import "NSURL+Param.h"
#import "NSTimer+Addition.h"
#import "NSObject+Swizzling.h"
#import "NSObject+AssociatedObject.h"
#import "NSNumber+Round.h"

#import "UIScreen+Accessor.h"
#import "UIActionSheet+Block.h"
#import "UIDevice+Extension.h"
#import "UIApplication+NetworkActivityIndicator.h"
#import "UIApplication+Extension.h"
#import "UIBarButtonItem+Badge.h"
#import "UIBarButtonItem+Extension.h"
#import "UINavigationController+StackManager.h"
#import "UINavigationController+Transitions.h"
#import "UIScrollView+Extension.h"
#import "UITableView+Extension.h"
#import "UITextField+Select.h"
#import "UITextField+Shake.h"
#import "UITextField+InputLimit.h"
#import "UITextView+InputLimit.h"
#import "UITextView+PlaceHolder.h"
#import "UITextView+InputLengthCalculate.h"
#import "UITextView+Select.h"
#import "UIWebView+Block.h"
#import "UIWebView+Load.h"
#import "UIWindow+Hierarchy.h"
#import "UILabel+CountDown.h"
#import "UILabel+FitLines.h"
#import "UILabel+AutomaticWriting.h"
#import "UIButton+CountDown.h"
#import "UIButton+Badge.h"
#import "UIButton+ImagePosition.h"
#import "UIButton+Indicator.h"
#import "UIButton+Submitting.h"
#import "UIButton+TouchAreaInsets.h"
#import "UIResponder+Router.h"
#import "UIResponder+Chain.h"
#import "UINavigationItem+Loading.h"
#import "UINavigationItem+Margin.h"
#import "UINavigationItem+Target.h"
#import "UINavigationItem+Addition.h"
#import "UIColor+Random.h"
#import "UIColor+Hex.h"
#import "UIColor+Gradient.h"
#import "UIImage+Extension.h"
#import "UIImage+Color.h"
#import "UIImage+Screenshot.h"
#import "UIImage+CornerRadius.h"
#import "UIImage+Effect.h"
#import "UIImageView+BetterFace.h"
#import "UIImageView+Letters.h"
#import "UIImageView+FaceAwareFill.h"
#import "UIImageView+Reflect.h"
#import "UIImageView+CornerRadius.h"
#import "UIImageView+Addition.h"
#import "UIAlertView+Block.h"
#import "UITextField+Select.h"
#import "UITextField+Shake.h"
#import "UITextField+InputLimit.h"
#import "UITextView+InputLimit.h"
#import "UITextView+InputLengthCalculate.h"
#import "UITextView+Select.h"
#import "UIWebView+Block.h"
#import "UIWebView+Load.h"
#import "UIWindow+Hierarchy.h"
#import "UILabel+CountDown.h"
#import "UILabel+FitLines.h"
#import "UILabel+AdjustableLabel.h"
#import "UILabel+AutomaticWriting.h"
#import "UIButton+CountDown.h"
#import "UIButton+Badge.h"
#import "UIButton+ImagePosition.h"
#import "UIButton+Indicator.h"
#import "UIButton+Submitting.h"
#import "UIButton+TouchAreaInsets.h"
#import "UIResponder+Router.h"
#import "UIResponder+Chain.h"
#import "UINavigationItem+Loading.h"
#import "UINavigationItem+Margin.h"
#import "UINavigationItem+Target.h"
#import "UIColor+Random.h"
#import "UIColor+Hex.h"
#import "UIColor+Gradient.h"
#import "UIImage+Color.h"
#import "UIImage+Screenshot.h"
#import "UIImage+CornerRadius.h"
#import "UIImage+Effect.h"
#import "UIView+CornerRadii.h"
#import "UIView+RedDot.h"
#import "UIView+Position.h"
#import "UIView+Gesture.h"
#import "UIView+SuperController.h"
#import "UIView+Screenshot.h"
#import "UIView+Visuals.h"
#import "UIView+CustomBorder.h"
#import "UIView+Line.h"
#import "UIView+FindSubView.h"

#endif 

#endif /* MYKit_h */
