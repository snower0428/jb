/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPLocationManager.h"

@protocol SearchLocationManagerDelegate;

@interface SearchLocationManager : ALPLocationManager {
@private
	id<SearchLocationManagerDelegate> _searchDelegate;
}
@property(assign, nonatomic) __weak id<SearchLocationManagerDelegate> searchDelegate;
-(void).cxx_destruct;
-(id)fetchSSIDInfo;
-(void)doProcessLocation:(id)location manager:(id)manager;
@end
