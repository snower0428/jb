//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView;

@interface TBBarButtonItem : NSObject
{
    BOOL _selected;
    BOOL _enabled;
    BOOL _isShowBadge;
    int _systemItem;
    UIImage *_image;
    UIImage *_highlightImage;
    UIImage *_selectedImage;
    UIImage *_backgroundImage;
    UIImage *_disabledImage;
    NSString *_title;
    float _width;
    UIView *_customView;
    id _target;
    SEL _action;
    UIView *_itemView;
}

+ (id)fixedSpaceToolbarItemWithWidth:(float)arg1;
+ (id)flexibleSpaceToolbarItem;
@property(nonatomic) BOOL isShowBadge; // @synthesize isShowBadge=_isShowBadge;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) int systemItem; // @synthesize systemItem=_systemItem;
- (void).cxx_destruct;
- (id)wrapperViewWithTarget:(id)arg1;
- (void)itemTapped:(id)arg1;
- (id)itemViewWithTitle:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithBarButtonSystemItem:(int)arg1 title:(id)arg2;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3 disabledImage:(id)arg4 backgroundImage:(id)arg5 target:(id)arg6 action:(SEL)arg7;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3 backgroundImage:(id)arg4 target:(id)arg5 action:(SEL)arg6;

@end
