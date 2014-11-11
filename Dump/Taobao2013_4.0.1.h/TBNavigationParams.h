//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBNavigationParams : NSObject
{
    BOOL _animated;
    BOOL _needNavigationCtrl;
    BOOL _needLogin;
    BOOL _needSafeCode;
    BOOL _needDissmiss;
    int _navigationType;
    NSString *_target;
}

+ (id)navigationParamsofDictionary:(id)arg1;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(nonatomic) BOOL needDissmiss; // @synthesize needDissmiss=_needDissmiss;
@property(nonatomic) BOOL needSafeCode; // @synthesize needSafeCode=_needSafeCode;
@property(nonatomic) BOOL needLogin; // @synthesize needLogin=_needLogin;
@property(nonatomic) BOOL needNavigationCtrl; // @synthesize needNavigationCtrl=_needNavigationCtrl;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (id)stringofNavigationParams;
- (id)init;

@end

