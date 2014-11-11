//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface TMLogicModel_ChannelBanner : NSObject
{
    NSString *_action;
    NSString *_bannerImage;
    long _bannerId;
    NSString *_name;
    NSString *_image;
    NSString *_contentType;
    long _likecnt;
    int _displayType;
    UIImage *_imageData;
}

@property(retain, nonatomic) UIImage *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) long likecnt; // @synthesize likecnt=_likecnt;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long bannerId; // @synthesize bannerId=_bannerId;
@property(retain, nonatomic) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
