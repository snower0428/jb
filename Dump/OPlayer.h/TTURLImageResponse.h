//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTURLResponse.h"

@class UIImage;

@interface TTURLImageResponse : NSObject <TTURLResponse>
{
    UIImage *_image;
    BOOL _autoresizesBigImage;
}

@property(nonatomic) BOOL autoresizesBigImage; // @synthesize autoresizesBigImage=_autoresizesBigImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)request:(id)arg1 processResponse:(id)arg2 data:(id)arg3;
- (void)dealloc;

@end
