//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface TBCityRateStarView : UIView
{
    NSString *_starString;
    id <TBCityRateStarViewDelegate> _starDelegate;
}

@property(nonatomic) id <TBCityRateStarViewDelegate> starDelegate; // @synthesize starDelegate=_starDelegate;
@property(retain, nonatomic) NSString *starString; // @synthesize starString=_starString;
- (void).cxx_destruct;
- (void)setStarNumber:(int)arg1;
- (void)buttonClick:(id)arg1;
- (id)initWithNewFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

