//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADStatisticDictionary, NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GADAd : NSObject
{
    BOOL _hasAdNetworkJavaScript;
    GADStatisticDictionary *_statistics;
    NSURL *_adBaseURL;
    NSString *_adHTML;
    NSURL *_adURL;
    NSArray *_clickURLs;
    NSArray *_impressionURLs;
    NSArray *_manualImpressionURLs;
    NSDictionary *_activeViewConfigurations;
    int _supportedOrientations;
    NSString *_debugDialog;
    NSURL *_adNetworkPassbackURL;
    NSDictionary *_swipeToViewControllerConfigurations;
    struct GADAdSize _size;
}

+ (id)adWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *swipeToViewControllerConfigurations; // @synthesize swipeToViewControllerConfigurations=_swipeToViewControllerConfigurations;
@property(readonly, copy, nonatomic) NSURL *adNetworkPassbackURL; // @synthesize adNetworkPassbackURL=_adNetworkPassbackURL;
@property(readonly, nonatomic) BOOL hasAdNetworkJavaScript; // @synthesize hasAdNetworkJavaScript=_hasAdNetworkJavaScript;
@property(copy, nonatomic) NSString *debugDialog; // @synthesize debugDialog=_debugDialog;
@property(nonatomic) int supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) struct GADAdSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSDictionary *activeViewConfigurations; // @synthesize activeViewConfigurations=_activeViewConfigurations;
@property(copy, nonatomic) NSArray *manualImpressionURLs; // @synthesize manualImpressionURLs=_manualImpressionURLs;
@property(copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(copy, nonatomic) NSArray *clickURLs; // @synthesize clickURLs=_clickURLs;
@property(copy, nonatomic) NSURL *adURL; // @synthesize adURL=_adURL;
@property(copy, nonatomic) NSString *adHTML; // @synthesize adHTML=_adHTML;
@property(copy, nonatomic) NSURL *adBaseURL; // @synthesize adBaseURL=_adBaseURL;
@property(retain, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
- (void).cxx_destruct;
- (BOOL)shouldLoadAdHTML;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

