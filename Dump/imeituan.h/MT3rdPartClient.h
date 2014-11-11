//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTSharePipeProtocol.h"

@interface MT3rdPartClient : NSObject <MTSharePipeProtocol>
{
    id <MT3rdPartClientDelegate> _delegate;
}

+ (id)defaultMTLogo;
@property(nonatomic) __weak id <MT3rdPartClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sharePayload:(id)arg1 from:(id)arg2;
- (void)beforeSharePayload:(id)arg1 from:(id)arg2;
- (int)isAvailable;

@end
