//
//  UtilsMacro.h
//  exam
//
//  Created by F1225128 on 15/9/22.
//  Copyright © 2015年 Foxonn. All rights reserved.
//

/**
 *  @author 王兆龙, 15-09-22 23:09:29
 *
 *  放置一些方便使用的宏定义
 */

#define KSCREEN_WIDTH  [[UIScreen mainScreen] bounds].size.width//屏幕宽度
#define KSCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height//屏幕高度

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]//十六进制颜色

#define NSStringFromInt(intValue) [NSString stringWithFormat:@"%ld",intValue]