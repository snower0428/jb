//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ATCLanLanAlbumProductItem : NSObject
{
    BOOL _isCollected;
    NSString *_imageUrl;
    NSString *_title;
    NSString *_price;
    NSString *_productId;
    NSString *_jumpUrl;
}

+ (id)randItem;
@property BOOL isCollected; // @synthesize isCollected=_isCollected;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

@end

