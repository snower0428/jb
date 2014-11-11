//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView;

@interface TBTabbarItem : NSObject
{
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    int _tag;
    NSString *_badgeValue;
    UIView *_itemView;
}

@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 tag:(int)arg4;

@end

