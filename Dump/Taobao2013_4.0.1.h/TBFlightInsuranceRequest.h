//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBHttpEngineDataDelegate.h"

@interface TBFlightInsuranceRequest : NSObject <TBHttpEngineDataDelegate>
{
    id <TBFlightInsuranceDelegate> _delegate;
}

@property(nonatomic) id <TBFlightInsuranceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)httpEngineDidReceiveDataSuccessWithResponse:(id)arg1;
- (void)getFlightInsurance:(id)arg1;

@end
