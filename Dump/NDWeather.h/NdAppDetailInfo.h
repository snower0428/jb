//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NdAppDetailInfo : NSObject
{
    int appId;
    NSString *appIconUrl;
    long appFileSize;
    NSString *appDescription;
    NSArray *softImages;
    NSString *lastModified;
    NSString *versionCode;
    NSString *versionName;
    NSString *updateTime;
    NSString *author;
    NSString *downloadUrl;
    NSString *appName;
    NSString *packageUri;
    NSString *supportPlatforms;
}

+ (id)detailFromDictionary:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *supportPlatforms; // @synthesize supportPlatforms;
@property(retain, nonatomic) NSString *packageUri; // @synthesize packageUri;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *author; // @synthesize author;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSString *versionName; // @synthesize versionName;
@property(retain, nonatomic) NSString *versionCode; // @synthesize versionCode;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified;
@property(retain, nonatomic) NSArray *softImages; // @synthesize softImages;
@property(retain, nonatomic) NSString *appDescription; // @synthesize appDescription;
@property(nonatomic) long appFileSize; // @synthesize appFileSize;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(nonatomic) int appId; // @synthesize appId;

@end

