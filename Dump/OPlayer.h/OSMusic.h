//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSFeed.h"

@class NSDate, NSDateFormatter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OSMusic : OSFeed
{
    NSDateFormatter *_dateFormatter;
    NSString *category;
    NSString *category_id;
    NSString *category_link;
    NSString *im_artist;
    NSString *im_artist_href;
    NSString *im_id;
    NSString *id_link;
    NSDictionary *im_image;
    NSString *im_name;
    NSString *im_price;
    int im_price_amount;
    NSString *im_price_currency;
    NSString *link_href;
    NSString *preview_href;
    NSDate *releaseDate;
    NSString *releaseDate_Label;
    NSString *title;
    int im_itemCount;
    NSString *summary;
    NSString *averageUserRating;
    NSString *im_collection;
}

@property(retain, nonatomic) NSString *im_collection; // @synthesize im_collection;
@property(retain, nonatomic) NSString *averageUserRating; // @synthesize averageUserRating;
@property(retain, nonatomic) NSString *summary; // @synthesize summary;
@property(nonatomic) int im_itemCount; // @synthesize im_itemCount;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *releaseDate_Label; // @synthesize releaseDate_Label;
@property(retain, nonatomic) NSDate *releaseDate; // @synthesize releaseDate;
@property(retain, nonatomic) NSString *preview_href; // @synthesize preview_href;
@property(retain, nonatomic) NSString *link_href; // @synthesize link_href;
@property(retain, nonatomic) NSString *im_price_currency; // @synthesize im_price_currency;
@property(nonatomic) int im_price_amount; // @synthesize im_price_amount;
@property(retain, nonatomic) NSString *im_price; // @synthesize im_price;
@property(retain, nonatomic) NSString *im_name; // @synthesize im_name;
@property(retain, nonatomic) NSDictionary *im_image; // @synthesize im_image;
@property(retain, nonatomic) NSString *id_link; // @synthesize id_link;
@property(retain, nonatomic) NSString *im_id; // @synthesize im_id;
@property(retain, nonatomic) NSString *im_artist_href; // @synthesize im_artist_href;
@property(retain, nonatomic) NSString *im_artist; // @synthesize im_artist;
@property(retain, nonatomic) NSString *category_link; // @synthesize category_link;
@property(retain, nonatomic) NSString *category_id; // @synthesize category_id;
@property(retain, nonatomic) NSString *category; // @synthesize category;
- (id)parseJson:(id)arg1;
- (id)getFeedFromEntry:(id)arg1;
- (void)deepProcess;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

