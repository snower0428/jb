//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTCityBasedModel.h"

@class MTCity;

@interface MTADConfigModel : MTBaseModel <MTCityBasedModel>
{
}

- (void)ADConfig:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain, nonatomic) MTCity *city;

@end

