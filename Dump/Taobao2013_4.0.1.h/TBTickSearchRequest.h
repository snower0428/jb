//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBHttpEngineDataDelegate.h"

@interface TBTickSearchRequest : NSObject <TBHttpEngineDataDelegate>
{
    id <TBSearchTicketrDelegate> delegate;
}

@property(nonatomic) id <TBSearchTicketrDelegate> delegate; // @synthesize delegate;
- (void)httpEngineDidReceiveDataSuccessWithResponse:(id)arg1;
- (void)searchTicket:(id)arg1;
- (id)parseFlightArrayFromRespnose:(id)arg1;
- (id)parseFlightFromDict:(id)arg1;

@end
