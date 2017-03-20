//
//  ViewController.h
//  Rest
//
//  Created by Andrzejewski on 18.03.17.
//  Copyright © 2017 Andrzejewski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


//@interface RestViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *greetingId;
@property (nonatomic, strong) IBOutlet UILabel *greetingContent;

- (IBAction)fetchGreeting;

@end

