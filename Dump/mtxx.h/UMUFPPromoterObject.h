//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface UMUFPPromoterObject : NSObject
{
    int _appId;
    int _promoterId;
    NSString *_title;
    NSString *_description;
    NSString *_ad_words;
    NSString *_formattedPrice;
    NSString *_ipaSize;
    NSURL *_iconURL;
    NSURL *_imgURL;
    NSURL *_downloadURL;
    NSArray *_screenShots;
    float _userRating;
    int _landing_type;
    int _content_type;
    int _index;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) int content_type; // @synthesize content_type=_content_type;
@property(nonatomic) int landing_type; // @synthesize landing_type=_landing_type;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) NSArray *screenShots; // @synthesize screenShots=_screenShots;
@property(copy, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSURL *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *ipaSize; // @synthesize ipaSize=_ipaSize;
@property(copy, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property(copy, nonatomic) NSString *ad_words; // @synthesize ad_words=_ad_words;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int promoterId; // @synthesize promoterId=_promoterId;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (void)dealloc;
- (void)loadAttributes:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end
