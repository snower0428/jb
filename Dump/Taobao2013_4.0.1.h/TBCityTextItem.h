//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBCityTextItem : NSObject
{
    NSString *_text;
    NSString *_detailText;
    NSString *_target;
}

+ (id)text:(id)arg1 detailText:(id)arg2 target:(id)arg3;
+ (id)text:(id)arg1 detailText:(id)arg2;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)dealloc;

@end
