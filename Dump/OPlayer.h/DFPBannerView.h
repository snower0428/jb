//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADBannerView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface DFPBannerView : GADBannerView
{
    NSArray *_validAdSizes;
}

@property(retain, nonatomic) NSArray *validAdSizes; // @synthesize validAdSizes=_validAdSizes;
- (void).cxx_destruct;
- (void)setValidAdSizesWithSizes:(struct GADAdSize *)arg1;
- (void)recordImpression;
- (void)resize:(struct GADAdSize)arg1;
- (void)dealloc;
@property(nonatomic) BOOL enableManualImpressions;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate;
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate;

@end

