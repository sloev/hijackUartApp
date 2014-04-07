//
//  GasSample.h
//  Smokalyzer
//
//  Created by johannes on 4/7/14.
//  Copyright (c) 2014 Andrew Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class GasSamples;

@interface GasSample : NSManagedObject

@property (nonatomic, retain) NSNumber * oxygen;
@property (nonatomic, retain) NSString * place;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) GasSamples *info;

@end
