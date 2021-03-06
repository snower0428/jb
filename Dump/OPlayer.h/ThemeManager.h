//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface ThemeManager : NSObject
{
    NSString *_themeName;
    NSString *_themePath;
    UIColor *_themeColor;
}

+ (void)setSharedThemeManager:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(copy, nonatomic) NSString *themePath; // @synthesize themePath=_themePath;
@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (BOOL)isFlatUI;
- (void)initCurrentTheme;
- (id)configInfoLabelThemeColor;
- (id)configTintThemeColor;
- (id)configDetailCellTextLabelThemeColor;
- (id)configCellHighLightTextLabelThemeColor;
- (id)configCellTextLabelThemeColor;
- (id)configHeadViewTextLabelThemeColor;
- (id)configFilelistCellBackgroundThemeColor;
- (id)configCellBackgroundThemeColor;
- (id)themedImage_inurl:(id)arg1;
- (id)themedImage_intabbar:(id)arg1;
- (id)themedImage_insource_details:(id)arg1;
- (id)themedImage_insettings_icons:(id)arg1;
- (id)themedImage_insettings:(id)arg1;
- (id)themedImage_inserver:(id)arg1;
- (id)themedImage_inplaylist:(id)arg1;
- (id)themedImage_inplayer_icons:(id)arg1;
- (id)themedImage_inplayer:(id)arg1;
- (id)themedImage_inmovies_icons:(id)arg1;
- (id)themedImage_inmovies:(id)arg1;
- (id)themedImage_inmainlist:(id)arg1;
- (id)themedImage_inlock:(id)arg1;
- (id)themedImage_initunes:(id)arg1;
- (id)themedImage_inheader:(id)arg1;
- (id)themedImage_infileslist_icons:(id)arg1;
- (id)themedImage_infileslist:(id)arg1;
- (id)themedImage_infiles_edit:(id)arg1;
- (id)themedImage_infiles_actions:(id)arg1;
- (id)themedImage_inedit_sources:(id)arg1;
- (id)themedImage_indownloads:(id)arg1;
- (id)themedImage_inbrowser:(id)arg1;
- (id)themedImageWithName:(id)arg1;
- (id)changeTheme:(id)arg1;

@end

