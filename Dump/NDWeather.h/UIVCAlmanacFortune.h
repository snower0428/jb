//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FortuneNetworkManagerDelegate.h"
#import "UIFortuneDayIndexViewDelegate.h"
#import "UIFortuneMlViewDelegate.h"
#import "UIFortuneSelectDelegate.h"
#import "UIHLHeaderBarViewdelgate.h"
#import "UIScrollViewDelegate.h"
#import "UITrendHistogramDelegate.h"

@class FortuneNetworkManager, MBProgressHUD, NSMutableDictionary, TDayInfo, UIFortouneMLView, UIFortuneDayIndexView, UIFortuneDesView, UIFortuneSelectBottom, UIFortuneSelectTop, UIHLHeaderBarView, UIScrollView, UITrendHistogram;

__attribute__((visibility("hidden")))
@interface UIVCAlmanacFortune : BaseViewController <UIScrollViewDelegate, FortuneNetworkManagerDelegate, UITrendHistogramDelegate, UIFortuneDayIndexViewDelegate, UIFortuneMlViewDelegate, UIFortuneSelectDelegate, UIHLHeaderBarViewdelgate>
{
    UIScrollView *_scr4YunShi;
    UIHLHeaderBarView *_vew4Header;
    UIFortuneSelectTop *_vew4TopSelect;
    UIFortuneSelectBottom *_vew4BottomSelect;
    UIFortouneMLView *_vew4MLInfo;
    UIFortuneDayIndexView *_vew4DayIndex;
    UITrendHistogram *_vew4Trend;
    UIFortuneDesView *_vew4Des;
    TDayInfo *_day4Now;
    NSMutableDictionary *_dic4type;
    int _curType;
    MBProgressHUD *fortuneHUD;
    int requestCount;
    FortuneNetworkManager *_dayRequest;
    FortuneNetworkManager *_monthRequest;
    FortuneNetworkManager *_yearRequest;
}

@property(retain, nonatomic) MBProgressHUD *fortuneHUD; // @synthesize fortuneHUD;
@property(retain, nonatomic) FortuneNetworkManager *yearRequest; // @synthesize yearRequest=_yearRequest;
@property(retain, nonatomic) FortuneNetworkManager *monthRequest; // @synthesize monthRequest=_monthRequest;
@property(retain, nonatomic) FortuneNetworkManager *dayRequest; // @synthesize dayRequest=_dayRequest;
@property(retain, nonatomic) NSMutableDictionary *dic4type; // @synthesize dic4type=_dic4type;
@property(retain, nonatomic) TDayInfo *day4Now; // @synthesize day4Now=_day4Now;
@property(retain, nonatomic) UIScrollView *scr4YunShi; // @synthesize scr4YunShi=_scr4YunShi;
- (void)showNianFortuneInfo:(BOOL)arg1;
- (void)showYueFortuneInfo:(BOOL)arg1;
- (void)showTomorrowRiFortuneInfo:(BOOL)arg1;
- (void)showRiFortuneInfo:(BOOL)arg1;
- (void)getFortuneFromNetWithType:(int)arg1;
- (void)showYunShiUI:(int)arg1 isShow:(BOOL)arg2;
- (void)showProgress:(BOOL)arg1;
- (id)getFortuneView;
- (id)getYunshiStruct;
- (void)onButtonInfo;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)FortuneRequestWithResult:(id)arg1 withType:(int)arg2;
- (void)didSelectFortune:(int)arg1;
- (id)getFortuneNumber;
- (id)getFortuneColor;
- (id)getFortuneDirection;
- (id)getDateInfo;
- (int)getDayIndex:(int)arg1;
- (void)getNLYearInfo:(id *)arg1 andLunarYearRange:(id *)arg2;
- (void)getNLMonthInfo:(id *)arg1 andLunarMonthRange:(id *)arg2;
- (int)getTodayNLMonth;
- (int)getTodayNLDay;
- (int)getHeaderBarType;
- (id)getTitleString;
- (void)didClickButton:(id)arg1 withButtonType:(int)arg2;
- (id)getMLInfo:(int)arg1;
- (void)refreshYearYunShi;
- (void)refreshMonthYunShi;
- (void)refreshTomorrowYunShi;
- (void)refreshDayYunShi;
- (id)getZWYunCheng:(id)arg1;
- (void)LoadAstro;
- (void)doSendBlog;
- (void)HideFailedInfo;
- (void)showFailedInfo:(id)arg1;
- (void)updateTheme;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

