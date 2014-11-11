//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAZeroingWeakRef, NSMutableDictionary, NSString;

@interface TribeProcess : NSObject
{
    MAZeroingWeakRef *_weakRefDelegate;
    MAZeroingWeakRef *_weakRefDelegateUI;
    NSString *_operation;
    NSMutableDictionary *_param;
    NSString *_clientData;
    id <tribeProcessResultDelegate> _delegate;
}

@property(copy, nonatomic) NSString *clientData; // @synthesize clientData=_clientData;
@property(copy, nonatomic) NSMutableDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) id <TribleUIDelegate> delegateUI;
@property(nonatomic) id <tribeProcessResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

@end

