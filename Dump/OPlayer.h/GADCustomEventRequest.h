//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GADCustomEventRequest : NSObject
{
    BOOL _userHasLocation;
    BOOL _isTesting;
    int _userGender;
    NSDate *_userBirthday;
    float _userLatitude;
    float _userLongitude;
    float _userLocationAccuracyInMeters;
    NSString *_userLocationDescription;
    NSArray *_userKeywords;
    NSDictionary *_additionalParameters;
}

@property(readonly, nonatomic) BOOL isTesting; // @synthesize isTesting=_isTesting;
@property(readonly, copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(readonly, copy, nonatomic) NSArray *userKeywords; // @synthesize userKeywords=_userKeywords;
@property(readonly, copy, nonatomic) NSString *userLocationDescription; // @synthesize userLocationDescription=_userLocationDescription;
@property(readonly, nonatomic) float userLocationAccuracyInMeters; // @synthesize userLocationAccuracyInMeters=_userLocationAccuracyInMeters;
@property(readonly, nonatomic) float userLongitude; // @synthesize userLongitude=_userLongitude;
@property(readonly, nonatomic) float userLatitude; // @synthesize userLatitude=_userLatitude;
@property(readonly, nonatomic) BOOL userHasLocation; // @synthesize userHasLocation=_userHasLocation;
@property(readonly, copy, nonatomic) NSDate *userBirthday; // @synthesize userBirthday=_userBirthday;
@property(readonly, nonatomic) int userGender; // @synthesize userGender=_userGender;
- (void).cxx_destruct;
- (id)initWithConnector:(id)arg1;

@end

