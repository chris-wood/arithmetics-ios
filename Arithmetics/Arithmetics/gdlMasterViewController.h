//
//  gdlMasterViewController.h
//  Arithmetics
//
//  Created by Wood, Christopher <Christopher.Wood@parc.com> on 7/23/14.
//  Copyright (c) 2014 Gotham Digital Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class gdlDetailViewController;

#import <CoreData/CoreData.h>

@interface gdlMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) gdlDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
