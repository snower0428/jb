//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RTLabel, STScratchView, UIImageView, UILabel, UIView;

@interface TBCityPayScratchView : NSObject
{
    RTLabel *_scratchResult;
    UILabel *_scratchResultJifen;
    STScratchView *_stScratchView;
    UIImageView *_scratchImageView;
    UILabel *_scratchTip;
    UIView *_scratchZoneView;
}

@property(retain, nonatomic) UIView *scratchZoneView; // @synthesize scratchZoneView=_scratchZoneView;
@property(retain, nonatomic) UILabel *scratchTip; // @synthesize scratchTip=_scratchTip;
@property(retain, nonatomic) UIImageView *scratchImageView; // @synthesize scratchImageView=_scratchImageView;
@property(retain, nonatomic) STScratchView *stScratchView; // @synthesize stScratchView=_stScratchView;
@property(retain, nonatomic) UILabel *scratchResultJifen; // @synthesize scratchResultJifen=_scratchResultJifen;
@property(retain, nonatomic) RTLabel *scratchResult; // @synthesize scratchResult=_scratchResult;
- (void).cxx_destruct;
- (void)setPrizeView:(id)arg1 imageUrl:(id)arg2 descrip:(id)arg3;
- (void)setPrizeView:(id)arg1 isDoyen:(id)arg2;
- (void)setNoPrizeView;
- (id)initWithsuperView:(id)arg1;

@end

