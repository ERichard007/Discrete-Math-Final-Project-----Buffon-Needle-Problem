"# Discrete-Math-Final-Project-----Buffon-Needle-Problem" 

Really cool Project, read the .pdf file for the results of the experiment and the code folder holds the actual programming of the project.

The following is the overview of the project description of what was required for submission:

-------------------------------------------------------------------------------------------------------------

Probabilistic Calculations
We should know by now that Pi is not rational; therefore we cannot express it exactly as
a ratio of two integers. However, using some algebra and randomized methods (referred
to as Monte Carlo methods), it is possible to estimate the value through a process where
we know the areas of a circle (inscribed within a square), and applying a little fancy math
to show how the ratios of the event space and sample space can yield an estimation of
Pi.
Actually, this site does a pretty good job explaining the details of what is happening in
this approach... https://www.geeksforgeeks.org/estimating-value-pi-using-monte-carlo/.
Read over the analyses such that you have a grasp on how this approach works, paying
careful attention to the discussion points revolving around the fact that this works better
as the number of data points increases. If you think back to our discussions of tossing
coins, if we tossed a fair coin only once, the single trial would yield either 0% heads, or
100% heads, when we know it should intuitively have a 50/50 chance of landing heads.
If we document many more trials, the total number of heads over the total number of
tosses should grow closer and closer to 50%.
You have two options for this assignment:
1. Construct your own experiment based upon the calculation of Pi to probabilistically
estimate the area of a different shape (not a circle). The easiest could be calculating the
area of a triangle contained inside a square. If the dimensions of the square are assumed
to be {0, ..., 1} along each of the x and y axes, a triangle T could be defined as T = (x, y)
where x + y <= 1. As you might guess, this triangle should be roughly ½ the area of the
square (as it roughly cuts the square in half). You are welcome to use other shapes, so
long as you follow the approach of probabilistically estimating your shape’s area.
2. Research and implement a different method of estimating Pi probabilistically. You can
choose any Monte Carlo method (repeated random trials) you like other than the one
outlined in the article. An example can be found here: https://youtu.be/RZBhSi_PwHU?
si=mm6r86MWtqGdYOGX
In preparation for this experiment, first take a bit of time to come up with your own
sample space and event space calculations. Document your expectations with respect to
aspects like accuracy and precision of estimating your shape’s area based upon
experimental conditions (namely, the number of random inputs used per experiment).
You can repeat the experiment with the same number of inputs to determine accuracy.
You can repeat the experiment with more random inputs to determine precision. Once
you have gathered data sufficient for analyses of both accuracy and precision, write up
the results of your experiments in report format.
The main focus here isn't necessarily the code, but the experiments and analysis.
What to submit:
Submit a Zip-file containing:
1. Report – A report in PDF format including the following information:
• Project Description – Describe the experiment that you will be
performing. Give some background information on the math
involved in your own words including some mention of sample
space, event, and probability. Make some predictions about the
results of your experiment.
• Experimental Data – Show the results of running your code with
varying amounts of random trials. Use either formatted tables or
code-generated plots to clearly illustrate the data. Make sure to
collect enough data to show a significant difference in the
results.
• Analysis – Summarize the results of your experiments.
Comment on whether your predictions were accurate or not. If
you encountered some unexpected results, make some
speculation on why that might have happened or describe what
you would do differently to address that in the future.
2. Source Code / Additional Files – Your code implementing the random
experiment. You can use either Python or C++ for this assignment, but your
code should be well commented to describe what it is doing. If your code
requires special compiler options, arguments, or input files to run, include a
description of how to build/execute your code in the report PDF
