//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AWAutoLocationProtocol.h"
#import "AutoWeatherUpdateController.h"
#import "ManualWeatherUpdateController.h"
#import "WeatherBottomViewDelegate.h"
#import "WeatherForecastViewDelegate.h"
#import "WeatherPMViewDataSource.h"
#import "WeatherPMViewDelegate.h"
#import "WeatherTopViewDelegate.h"

@class City, NSArray, PMValue, SunRiseSet, TodayWeather, UIButton, WeatherBottomView, WeatherForecastView, WeatherPMView, WeatherTopView, WeatherWarning;

__attribute__((visibility("hidden")))
@interface UIWeather : BaseViewController <AutoWeatherUpdateController, ManualWeatherUpdateController, WeatherTopViewDelegate, WeatherForecastViewDelegate, WeatherPMViewDataSource, WeatherPMViewDelegate, AWAutoLocationProtocol, WeatherBottomViewDelegate>
{
    City *_city;
    TodayWeather *todayWeather;
    NSArray *forecastInitialWeather;
    SunRiseSet *sunRiseSet;
    PMValue *pmValue;
    WeatherWarning *warning;
    UIButton *_backgroundButton;
    NSArray *_forecastWeekdays;
    NSArray *_forecastWeather;
    BOOL _hideSubviews;
    WeatherBottomView *_weatherBottomView;
    WeatherTopView *_weatherTopView;
    WeatherPMView *_pmView;
    WeatherForecastView *_weatherForecastView;
}

@property(nonatomic) WeatherForecastView *weatherForecastView; // @synthesize weatherForecastView=_weatherForecastView;
@property(nonatomic) WeatherPMView *pmView; // @synthesize pmView=_pmView;
@property(nonatomic) WeatherTopView *weatherTopView; // @synthesize weatherTopView=_weatherTopView;
@property(nonatomic) WeatherBottomView *weatherBottomView; // @synthesize weatherBottomView=_weatherBottomView;
@property(nonatomic) BOOL hideSubviews; // @synthesize hideSubviews=_hideSubviews;
@property(retain) NSArray *forecastWeather; // @synthesize forecastWeather=_forecastWeather;
@property(retain, nonatomic) NSArray *forecastWeekdays; // @synthesize forecastWeekdays=_forecastWeekdays;
@property(nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WeatherWarning *warning; // @synthesize warning;
@property(retain) PMValue *pmValue; // @synthesize pmValue;
@property(retain) SunRiseSet *sunRiseSet; // @synthesize sunRiseSet;
@property(retain) NSArray *forecastInitialWeather; // @synthesize forecastInitialWeather;
@property(retain) TodayWeather *todayWeather; // @synthesize todayWeather;
@property(retain) City *city; // @synthesize city=_city;
- (void)backgroundButtonDidClick:(id)arg1;
- (void)subviewsAnimation:(id)arg1;
- (void)unregisterSubviewsAnimation;
- (void)registerSubviewsAnimation;
- (void)forecastTrend;
- (void)pmSourceChange:(id)arg1;
- (void)reloadWeatherBottomView;
- (void)showHistoryWeather;
- (void)touchesEndedInPMView;
- (id)weatherHint;
- (id)weatherPM25BackColor;
- (id)weatherPM25Color;
- (id)weatherPM25;
- (id)weatherPM25Title;
- (BOOL)isWeatherPMValid;
- (void)forecastDidClick:(id)arg1;
- (id)weather:(id)arg1 forIndex:(int)arg2;
- (id)temperature:(id)arg1 forIndex:(int)arg2;
- (id)weekName:(id)arg1 forIndex:(int)arg2;
- (id)forecastImageName:(id)arg1 forIndex:(int)arg2;
- (void)touchWeatherForecastButton;
- (void)calendarDidClick:(id)arg1;
- (void)almanacDidClick:(id)arg1;
- (void)liveIndexDidClick:(id)arg1;
- (BOOL)showDarkColor;
- (id)warningColor;
- (id)warningImageName;
- (id)warningText;
- (BOOL)isShowWarning;
- (BOOL)isRotatingRefreshImage;
- (id)weatherImageName;
- (id)releaseTime;
- (BOOL)showWeatherImage;
- (id)weatherVariation;
- (id)temperatureVariation;
- (id)temperature;
- (void)warningDidClick:(id)arg1;
- (void)refreshDidClick:(id)arg1;
- (void)touchWarningg:(id)arg1;
- (void)refreshWeather:(id)arg1;
- (void)receiveManualUpdateFail:(id)arg1;
- (void)receiveManualUpdateSuccess:(id)arg1;
- (void)receiveStartManualUpdate:(id)arg1;
- (void)receiveAutoUpdateFail:(id)arg1;
- (void)receiveAutoUpdateSuccess:(id)arg1;
- (void)receiveCityStartAutoUpdate:(id)arg1;
- (void)receiveAWAutoLocationFail:(id)arg1;
- (void)receiveAWAutoLocationSuccess:(id)arg1;
- (void)receiveAWAutoLocationStart:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

