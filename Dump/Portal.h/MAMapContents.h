/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MAMapView;
@protocol MADataSource;

@interface MAMapContents : XXUnknownSuperclass {
@private
	id<MADataSource> dataSource;
	CGRect mapViewFrame;
	MAMapView* mapViewObj;
}
@property(assign, nonatomic) MAMapView* mapViewObj;
@property(assign, nonatomic) CGRect mapViewFrame;
@property(retain, nonatomic) id<MADataSource> dataSource;
-(void).cxx_destruct;
@end

