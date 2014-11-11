//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface TipsModel : NSObject
{
    NSString *uniqueID;
    UIImage *image;
    NSString *title;
    NSString *content;
    NSString *buttonTitle;
    id delegate;
    SEL actionSelector;
    struct CGSize size;
    struct CGRect imageFrame;
    struct CGRect titleFrame;
    struct CGRect contentFrame;
    struct CGRect buttonFrame;
}

@property(nonatomic) struct CGRect buttonFrame; // @synthesize buttonFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) SEL actionSelector; // @synthesize actionSelector;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID;
- (void)dealloc;

@end

