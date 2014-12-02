//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TTCSSTextShadowModel, UIColor;

@interface TTCSSRuleSet : NSObject
{
    NSString *selector;
    UIColor *color;
    UIColor *background_color;
    NSString *font_family;
    NSString *font_weight;
    NSNumber *font_size;
    NSString *text_align;
    TTCSSTextShadowModel *text_shadow;
    NSNumber *text_shadow_opacity;
    NSString *background_image;
    NSString *visibility;
    NSString *width;
    NSString *height;
    NSString *top;
    NSString *left;
    NSString *right;
    NSString *bottom;
    NSString *vertical_align;
    NSString *margin_right;
    NSString *margin_left;
}

+ (id)initWithSelectorName:(id)arg1;
@property(copy) NSString *margin_left; // @synthesize margin_left;
@property(copy) NSString *margin_right; // @synthesize margin_right;
@property(copy) NSString *vertical_align; // @synthesize vertical_align;
@property(copy) NSString *bottom; // @synthesize bottom;
@property(copy) NSString *right; // @synthesize right;
@property(copy) NSString *left; // @synthesize left;
@property(copy) NSString *top; // @synthesize top;
@property(copy) NSString *visibility; // @synthesize visibility;
@property(copy) NSString *height; // @synthesize height;
@property(copy) NSString *width; // @synthesize width;
@property(copy) NSString *text_align; // @synthesize text_align;
@property(copy) NSNumber *text_shadow_opacity; // @synthesize text_shadow_opacity;
@property(retain) TTCSSTextShadowModel *text_shadow; // @synthesize text_shadow;
@property(copy) NSString *background_image; // @synthesize background_image;
@property(retain) id background_color; // @synthesize background_color;
@property(retain) id color; // @synthesize color;
@property(copy) NSString *font_weight; // @synthesize font_weight;
@property(copy) NSString *font_family; // @synthesize font_family;
@property(copy) NSNumber *font_size; // @synthesize font_size;
@property(copy) NSString *selector; // @synthesize selector;
- (int)contentHorizontalAlignment;
- (int)contentVerticalAlignment;
- (BOOL)hidden;
- (struct CGPoint)origin;
- (struct CGSize)size;
- (int)textAlign;
- (id)font;
- (void)setUIColorProperty:(id *)arg1 withValue:(id)arg2;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)validateFont_family:(id *)arg1 error:(id *)arg2;
- (BOOL)validateVisibility:(id *)arg1 error:(id *)arg2;
- (BOOL)validateText_align:(id *)arg1 error:(id *)arg2;
- (BOOL)validateVertical_align:(id *)arg1 error:(id *)arg2;
- (id)formatError:(id)arg1;
- (void)dealloc;
- (id)init;

@end
