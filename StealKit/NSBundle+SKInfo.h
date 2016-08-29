//
//  NSBundle+SKInfo.h
//  StealKitDemo
//
//  Created by 赵瑜瑜 on 16/8/29.
//  Copyright © 2016年 StealKit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (SKInfo)

+ (NSString *)sk_appName;
+ (NSString *)sk_appVersion;
+ (NSString *)sk_appBundleIdentifier;

@end