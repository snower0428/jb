//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBCityDDCityListService, TBCityLocationService, UIButton, UILabel;

@interface TBCitySwitchCityView : UIView
{
    BOOL _useButton;
    NSString *_cityName;
    UILabel *_label;
    UIButton *_cityButton;
    TBCityLocationService *_locationService;
    id <TBCitySwitchCityViewDelegate> _delegate;
    TBCityDDCityListService *_cityListService;
    NSString *_title;
}

@property(nonatomic) BOOL useButton; // @synthesize useButton=_useButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) TBCityDDCityListService *cityListService; // @synthesize cityListService=_cityListService;
@property(nonatomic) id <TBCitySwitchCityViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBCityLocationService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) UIButton *cityButton; // @synthesize cityButton=_cityButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
- (void).cxx_destruct;
- (void)reload;
- (void)doReloadCity;
- (void)doCityButton;
- (void)loadCityData;
- (void)loadLocation;
- (void)reLocation;
- (void)render;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withTitle:(id)arg2 useButton:(BOOL)arg3;

@end
