//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTChatBoxView, NSString;

@protocol MTChatBoxViewDelegate <NSObject>

@optional
- (void)chatBoxView:(MTChatBoxView *)arg1 heightWillChange:(float)arg2;
- (BOOL)chatBoxView:(MTChatBoxView *)arg1 shouldSendText:(NSString *)arg2;
@end

