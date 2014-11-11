//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIColor, UIImage;

@interface LineCellModel : NSObject
{
    BOOL _underLine;
    BOOL _crossLine;
    BOOL _overLine;
    BOOL _display;
    NSString *_name;
    NSString *_type;
    NSString *_value;
    int _controlSize;
    UIColor *_color;
    NSString *_tip;
    NSString *_hint;
    NSString *_defaultValue;
    UIImage *_image;
    NSString *_action;
    NSDictionary *_params;
    NSString *_js;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _margin;
}

@property(retain, nonatomic) NSString *js; // @synthesize js=_js;
@property(nonatomic) BOOL display; // @synthesize display=_display;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) BOOL overLine; // @synthesize overLine=_overLine;
@property(nonatomic) BOOL crossLine; // @synthesize crossLine=_crossLine;
@property(nonatomic) BOOL underLine; // @synthesize underLine=_underLine;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int controlSize; // @synthesize controlSize=_controlSize;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDataDic:(id)arg1;

@end

