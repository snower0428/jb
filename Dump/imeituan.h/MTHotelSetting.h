//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDomainObject.h"

#import "MTHotelSetting.h"

@class NSString;

@interface MTHotelSetting : MTDomainObject <MTHotelSetting>
{
    int _daysAccept;
    NSString *_retentionFinalTime;
}

@property(retain, nonatomic) NSString *retentionFinalTime; // @synthesize retentionFinalTime=_retentionFinalTime;
@property(nonatomic) int daysAccept; // @synthesize daysAccept=_daysAccept;
- (void).cxx_destruct;
- (void)setWithPersistentObject:(id)arg1;
- (void)setWithDictionary:(id)arg1;

@end

