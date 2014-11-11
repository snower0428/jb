//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface TBThemeManager : NSObject
{
    NSArray *_availableThemeNameList;
    NSString *_themeBundlePath;
    NSDictionary *_themeConfiguration;
    NSDictionary *_currentThemeProperties;
    NSString *_currentResourcePath;
    NSString *_currentImageResourcePath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableThemeNameList;
@property(readonly, nonatomic) NSArray *availableThemeList;
@property(readonly, nonatomic) NSString *currentThemeName;
@property(readonly, nonatomic) NSString *currentImageResourcePath;
@property(readonly, nonatomic) NSString *currentResourcePath;
@property(readonly, nonatomic) NSDictionary *currentThemeProperties;
@property(readonly, nonatomic) NSDictionary *themeConfiguration;
@property(readonly, nonatomic) NSString *themeBundlePath;
- (id)getPListFilePath:(id)arg1;
- (id)getFilePathRetinaByDir:(id)arg1 dir:(id)arg2;
- (id)getFilePathRetina:(id)arg1;
- (id)getFilePath:(id)arg1;
- (void)changeCurrentThemeTo:(id)arg1;
- (id)paramWithKey:(id)arg1 domain:(id)arg2;
- (id)paramWithKey:(id)arg1;
- (id)init;
- (id)retinaName:(id)arg1;
- (id)commonName:(id)arg1;
- (BOOL)isThemeExist:(id)arg1;

@end

