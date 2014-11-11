//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SkinManager.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface SkinManager : NSObject <SkinManager>
{
    UIImage *_image;
    BOOL _showWeatherBackground;
    BOOL _showDarkColor;
}

+ (id)sharedManager;
@property(nonatomic) BOOL showDarkColor; // @synthesize showDarkColor=_showDarkColor;
@property(nonatomic) BOOL showWeatherBackground; // @synthesize showWeatherBackground=_showWeatherBackground;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)cutImageToScreenSize:(id)arg1;
- (id)getSkinImage;
- (void)reloadBackgroundImage;
- (void)reloadData;
- (void)setWeatherSkinImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end
