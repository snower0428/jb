//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTCityBasedModel.h"

@class MTCity;

@interface MTDealFilterModel : MTBaseModel <MTCityBasedModel>
{
}

- (void)fetchFilterOfCategory:(int)arg1 nearSubwayStation:(int)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchFilterOfCategory:(int)arg1 nearSubwayLine:(int)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchFilterOfCategory:(int)arg1 inArea:(int)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchFilterOfCategory:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchFilterOfCategory:(int)arg1 withParameters:(id)arg2 finished:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain, nonatomic) MTCity *city;

@end
