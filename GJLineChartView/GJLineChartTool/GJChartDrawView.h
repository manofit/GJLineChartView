//  您好，谢谢您参考我的项目，如果有问题请移步
//  https://github.com/manofit/GJLineChartView

//
//  GJLineChartView.h
//  GJLineChartView
//
//  Created by gaojun on 2018/2/20.
//  Copyright © 2018年 GJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+expanded.h"

//饼形图需要的宏定义
#define kAnimationDuration 0.25f
#define kPieBackgroundColor [UIColor grayColor]
#define kPieFillColor [UIColor clearColor].CGColor
#define kPieRandColor [UIColor colorWithRed:arc4random() % 255 / 255.0f green:arc4random() % 255 / 255.0f blue:arc4random() % 255 / 255.0f alpha:1.0f]
#define kLabelLoctionRatio (1.2*bgRadius)
#define kThemeColor [UIColor colorWithRed:0.66 green:0.65 blue:0.98 alpha:1.00]
#define numberOfYAxisElements 4 // y轴分为几段

typedef NS_ENUM(NSInteger) {
    PieChart_Type = 0, //饼形图
    BarChart_Type = 1  //柱状图
}DrawViewType;

@interface GJChartDrawView : UIView<CAAnimationDelegate>

//自定义初始化方法
-(id)initWithFrame:(CGRect)frame type:(DrawViewType)type yMax:(CGFloat)yMax yMin:(CGFloat)yMin;

//绘图类型
@property(nonatomic ,assign)DrawViewType drawType;
//折线图数据数组
@property(nonatomic ,strong)NSMutableArray *arrayPoint;
//x轴刻度名称
@property(nonatomic ,strong)NSMutableArray *scaleArray;
//y轴刻度名称
@property(nonatomic ,strong)NSMutableArray *columnArray;
//折线图开始点
@property(nonatomic ,assign)CGPoint startPint;
//折线图结束点
@property(nonatomic ,assign)CGPoint endPoint;
//count
@property(nonatomic ,assign)NSInteger NumCount;
//单位
@property(nonatomic ,strong)NSString *unitStr;
//最大范围
@property(nonatomic ,assign)float yMax;
//最小范围
@property(nonatomic ,assign)float yMin;
//饼形图颜色数据
@property(nonatomic ,strong)NSArray *colorItems;

@end
