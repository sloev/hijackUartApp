//
//  GasSamples.h
//  Smokalyzer
//
//  Created by johannes on 4/7/14.
//  Copyright (c) 2014 Andrew Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class GasSample;

@interface GasSamples : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * place;
@property (nonatomic, retain) NSSet *details;
@end

@interface GasSamples (CoreDataGeneratedAccessors)

- (void)addDetailsObject:(GasSample *)value;
- (void)removeDetailsObject:(GasSample *)value;
- (void)addDetails:(NSSet *)values;
- (void)removeDetails:(NSSet *)values;

@end
