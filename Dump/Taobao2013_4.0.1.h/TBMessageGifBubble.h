//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMessageBubble.h"

#import "TTURLRequestDelegate.h"

@class UIImageView;

@interface TBMessageGifBubble : TBMessageBubble <TTURLRequestDelegate>
{
    UIImageView *_imageView;
    UIImageView *_gifImageView;
}

@property(retain, nonatomic) UIImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)setWwMessage:(id)arg1;
- (void)dealloc;

@end

