//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBChatPanel;

@protocol TBChatPanelDelegate <NSObject>
- (void)chatPanel:(TBChatPanel *)arg1 didDragHeadToIndex:(int)arg2 fromIndex:(int)arg3;
- (void)chatPanel:(TBChatPanel *)arg1 didRemoveHeadAtIndex:(int)arg2;

@optional
- (void)chatPanelBeginDragging:(TBChatPanel *)arg1;
- (void)chatPanel:(TBChatPanel *)arg1 selectedIndex:(int)arg2 didChangeToIndex:(int)arg3;
- (void)chatPanel:(TBChatPanel *)arg1 didSnapTo:(int)arg2;
- (void)chatPanelDidClose:(TBChatPanel *)arg1 sourceType:(int)arg2;
- (void)chatPanelDidOpen:(TBChatPanel *)arg1;
- (BOOL)chatPanelShouldOpen:(TBChatPanel *)arg1;
- (void)chatPanelDidHidden:(TBChatPanel *)arg1;
@end
