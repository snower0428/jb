//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AutoWeatherUpdateController.h"
#import "WeatherForecastWindViewDataSource.h"

@class CurvePo, NSArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIVCWeatherForecastTemperature, WeatherForecastWindView;

__attribute__((visibility("hidden")))
@interface UIVCWeatherForecastTrend : BaseViewController <WeatherForecastWindViewDataSource, AutoWeatherUpdateController>
{
    NSString *_cityCode;
    UIVCWeatherForecastTemperature *forecastTemperature;
    WeatherForecastWindView *forecastWind;
    CurvePo *curvePo;
    NSArray *windArray;
    NSArray *datesArray;
    NSArray *weeksArray;
    NSString *cityName;
    BOOL isInNight;
    BOOL isForeign;
    BOOL windShowing;
    UIButton *_temperatureButton;
    UIButton *_windButton;
    UIImageView *backBtnNormal;
    UIImageView *backBtnDown;
    UIActivityIndicatorView *_activityView;
}

@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) UIVCWeatherForecastTemperature *forecastTemperature; // @synthesize forecastTemperature;
- (void)receiveAutoUpdateFail:(id)arg1;
- (void)receiveAutoUpdateSuccess:(id)arg1;
- (void)receiveCityStartAutoUpdate:(id)arg1;
- (BOOL)isCityInNightForCurveView:(id)arg1;
- (BOOL)isCityInForeign:(id)arg1;
- (id)getCityName:(id)arg1;
- (id)getweeksArray:(id)arg1;
- (id)getDatesArray:(id)arg1;
- (id)windForecastsForCurveView:(id)arg1;
- (id)curvePoForCurveView:(id)arg1;
- (BOOL)checkWindDataIsNULL;
- (void)reloadWindDate;
- (void)initData;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 cityCode:(id)arg3;
- (void)rightButton:(id)arg1;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)windButtonEvent:(id)arg1;
- (void)temperatureButtonEvent:(id)arg1;

@end
