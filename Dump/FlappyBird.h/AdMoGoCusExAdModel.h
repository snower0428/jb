//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AdMoGoCusExAdModel : NSObject
{
    NSString *appIconUrlString;
    NSString *appName;
    NSString *adText;
    NSString *adImageUrlString;
    BOOL haveHighImage;
    NSString *contentDescription;
    NSArray *screenShotImageUrlStringArray;
    int linkType;
    int adType;
    int adLaunchType;
    NSString *redirectUrlString;
    NSString *clickMetricsUrlString;
    NSString *downloadMetricsUrlString;
    BOOL isIphone;
    NSString *verticalInmageURL;
    NSString *horizontalImageURL;
    int adSize;
    int ach;
}

@property(nonatomic) int ach; // @synthesize ach;
@property(nonatomic) int adSize; // @synthesize adSize;
@property(retain, nonatomic) NSString *horizontalImageURL; // @synthesize horizontalImageURL;
@property(retain, nonatomic) NSString *verticalInmageURL; // @synthesize verticalInmageURL;
@property(nonatomic) BOOL isIphone; // @synthesize isIphone;
@property(retain, nonatomic) NSString *downloadMetricsUrlString; // @synthesize downloadMetricsUrlString;
@property(retain, nonatomic) NSString *clickMetricsUrlString; // @synthesize clickMetricsUrlString;
@property(retain, nonatomic) NSString *redirectUrlString; // @synthesize redirectUrlString;
@property(nonatomic) int adLaunchType; // @synthesize adLaunchType;
@property(nonatomic) int adType; // @synthesize adType;
@property(nonatomic) int linkType; // @synthesize linkType;
@property(retain, nonatomic) NSArray *screenShotImageUrlStringArray; // @synthesize screenShotImageUrlStringArray;
@property(retain, nonatomic) NSString *contentDescription; // @synthesize contentDescription;
@property(nonatomic) BOOL haveHighImage; // @synthesize haveHighImage;
@property(retain, nonatomic) NSString *adImageUrlString; // @synthesize adImageUrlString;
@property(retain, nonatomic) NSString *adText; // @synthesize adText;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appIconUrlString; // @synthesize appIconUrlString;
- (void)dealloc;
- (id)init;

@end
