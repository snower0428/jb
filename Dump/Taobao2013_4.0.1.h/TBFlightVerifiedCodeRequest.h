//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBHttpEngineDataDelegate.h"

@interface TBFlightVerifiedCodeRequest : NSObject <TBHttpEngineDataDelegate>
{
    id <TBFlightVerifiedCodeDelegate> delegate;
}

@property(nonatomic) id <TBFlightVerifiedCodeDelegate> delegate; // @synthesize delegate;
- (void)httpEngineDidReceiveDataSuccessWithResponse:(id)arg1;
- (void)getVerifiedCode:(id)arg1;

@end
