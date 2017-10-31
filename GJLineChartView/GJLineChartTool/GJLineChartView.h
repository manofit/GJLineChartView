//
//  GJLineChartView.h
//  GJLineChartView
//
//  Created by gaojun on 2017/9/31.
//  Copyright © 2017年 GJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GJLineChartView : UIView

- (id)initWithFrame:(CGRect)frame
        xTitleArray:(NSArray*)xTitleArray
        yValueArray:(NSArray*)yValueArray
               yMax:(CGFloat)yMax
               yMin:(CGFloat)yMin
               unit:(NSString*)unit;
@end
