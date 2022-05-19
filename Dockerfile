FROM Python:3.10.4

ADD main.py .

RUN pip install math

CMD [ "python", "./main.py" ]
