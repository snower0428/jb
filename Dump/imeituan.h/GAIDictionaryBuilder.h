//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GAIDictionaryBuilder : NSObject
{
    NSMutableDictionary *_parameters;
}

+ (id)createTransactionWithId:(id)arg1 affiliation:(id)arg2 revenue:(id)arg3 tax:(id)arg4 shipping:(id)arg5 currencyCode:(id)arg6;
+ (id)createTimingWithCategory:(id)arg1 interval:(id)arg2 name:(id)arg3 label:(id)arg4;
+ (id)createSocialWithNetwork:(id)arg1 action:(id)arg2 target:(id)arg3;
+ (id)createItemWithTransactionId:(id)arg1 name:(id)arg2 sku:(id)arg3 category:(id)arg4 price:(id)arg5 quantity:(id)arg6 currencyCode:(id)arg7;
+ (id)createExceptionWithDescription:(id)arg1 withFatal:(id)arg2;
+ (id)gai_exceptionWithDescription:(id)arg1 withFatal:(id)arg2;
+ (id)createEventWithCategory:(id)arg1 action:(id)arg2 label:(id)arg3 value:(id)arg4;
+ (id)createAppView;
+ (id)valueForString:(id)arg1;
+ (id)valueForNumber:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)setCampaignParametersFromUrl:(id)arg1;
- (id)build;
- (id)get:(id)arg1;
- (id)setAll:(id)arg1;
- (id)gai_set:(id)arg1 forKey:(id)arg2;
- (id)set:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
